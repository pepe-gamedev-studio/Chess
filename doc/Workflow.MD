## Один раз на старте

`git clone git@github.com:pepe-gamedev-studio/Chess.git`

Создать в корне `.vs_fragment`. Пример

```
<IncludePath>./Src;D:/Repo/VulkanSDK_1.1.101.0/Include;D:/Repo/glfw/include;D:/Repo/imgui;$(IncludePath)</IncludePath>
<LibraryPath>D:/Repo/VulkanSDK_1.1.101.0/Lib;D:/Repo/glfw/lib;D:/Repo/imgui/x64/Debug;$(LibraryPath)</LibraryPath>
```

Применить фильтры `git config --local include.path ../.gitconfig`

## Пишем новую фичу

Вытягиваем обновки  `git checkout dev` и `git pull --rebase origin dev`

Создаем бранчу для новой фичи `git checkout -b <feature_name>`

## Пушим

Находимся в ветке фичи

Стянули обновки и подтянули локальный бранч `git fetch origin dev:dev`

Сдвинули фичу в начало дев бранчи `git rebase dev`

Смерджили фичку `git checkout dev` и `git merge <feature_name> --no-ff`

Отдали гитхубу наше творчество `git push origin dev`

По задумке у нас всегда будет линейная история коммитов
