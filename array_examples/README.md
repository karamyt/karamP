# أمثلة على المصفوفات و الـ vector في C++

ملفات أمثلة في هذا المجلد:
- `array_example.cpp` - مصفوفة ثابتة (Array)
- `vector_example.cpp` - استخدام `vector` (ArrayList-like)
- `array2d_example.cpp` - مصفوفة ثنائية الأبعاد (2D Array)
- `vector2d_example.cpp` - مصفوفة ثنائية الأبعاد ديناميكية (`vector<vector<int>>`)

كيفية الترجمة والتشغيل:
افتح الطرفية (PowerShell أو MSYS) داخل مجلد `array_examples` ثم نفذ:

```bash
g++ -std=c++17 array_example.cpp -o array_example.exe
./array_example.exe

g++ -std=c++17 vector_example.cpp -o vector_example.exe
./vector_example.exe

g++ -std=c++17 array2d_example.cpp -o array2d_example.exe
./array2d_example.exe

g++ -std=c++17 vector2d_example.cpp -o vector2d_example.exe
./vector2d_example.exe
```

ملاحظة: على Windows قد تحتاج لتشغيل `array_example.exe` بدون `./` أو استخدم محرر C++ الذي تفضله.

نصوص الأمثلة باللغة العربية مع تعليقات توضيحية.
