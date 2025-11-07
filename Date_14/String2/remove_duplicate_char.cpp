Absolutely ✅ — here are **all four approaches** to **remove duplicates from a string (order preserved)**, each in its **short, clean version** with **TC/SC summary**.

---

### 🟩 **1️⃣ Using Set (Hashing)**

```python
def remove_dup_set(s):
    seen = set()
    return ''.join([ch for ch in s if not (ch in seen or seen.add(ch))])
```

**TC:** O(n) **SC:** O(k) **Order preserved:** ✅

---

### 🟩 **2️⃣ Using Frequency Array (for ASCII)**

```python
def remove_dup_freq(s):
    seen = [False] * 256
    res = []
    for ch in s:
        if not seen[ord(ch)]:
            seen[ord(ch)] = True
            res.append(ch)
    return ''.join(res)
```

**TC:** O(n) **SC:** O(1) **Order preserved:** ✅

---

### 🟩 **3️⃣ Using OrderedDict / dict**

```python
from collections import OrderedDict
def remove_dup_dict(s):
    return ''.join(OrderedDict.fromkeys(s))
```

**TC:** O(n) **SC:** O(k) **Order preserved:** ✅

---

### 🟩 **4️⃣ Using Two Pointers (No Extra DS)**

```python
def remove_dup_two_ptr(s):
    chars = list(s)
    j = 0
    for i in range(len(chars)):
        if chars[i] not in chars[:j]:
            chars[j] = chars[i]
            j += 1
    return ''.join(chars[:j])
```

**TC:** O(n²) **SC:** O(1) **Order preserved:** ✅

---

### 🧠 **Quick Summary Table**

| # | Approach Name       | TC    | SC   | Order Preserved | Uses Extra DS  |
| - | ------------------- | ----- | ---- | --------------- | -------------- |
| 1 | Set / Hashing       | O(n)  | O(k) | ✅ Yes           | ✅ Yes          |
| 2 | Frequency Array     | O(n)  | O(1) | ✅ Yes           | ⚙️ Fixed array |
| 3 | OrderedDict / Dict  | O(n)  | O(k) | ✅ Yes           | ✅ Yes          |
| 4 | Two-Pointer (No DS) | O(n²) | O(1) | ✅ Yes           | ❌ No           |

