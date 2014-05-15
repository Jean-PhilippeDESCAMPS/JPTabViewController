JPTabViewController
===================

![alt tag](https://raw.github.com/Jean-PhilippeDESCAMPS/JPTabViewController/master/demo.gif)

Français

JPTabViewController est un composant graphique permettant de réaliser sur iOS un Tab Fragment Android.

Simplicité d'intégration : initialisation avec un tableau de controllers.

```Objective-C
#import "JPTabViewController.h"

    UIViewController *redController = [[UIViewController alloc] init];
    [redController setTitle:@"RED"];
    [[redController view] setBackgroundColor:[UIColor redColor]];

    UIViewController *greenController = [[UIViewController alloc] init];
    [greenController setTitle:@"GREEN"];
    [[greenController view] setBackgroundColor:[UIColor greenColor]];

    UIViewController *blueController = [[UIViewController alloc] init];
    [blueController setTitle:@"BLUE"];
    [[blueController view] setBackgroundColor:[UIColor blueColor]];

    JPTabViewController *tabViewController = [[JPTabViewController alloc] initWithControllers:@[redController, greenController, blueController]];

```

日本語

JPTabViewControllerをiOSタブアンドロイドフラグメントを達成するためのグラフィカルコンポーネントです。

統合の容易さ：コントローラの配列を初期化。

```Objective-C
#import "JPTabViewController.h"

    UIViewController *redController = [[UIViewController alloc] init];
    [redController setTitle:@"RED"];
    [[redController view] setBackgroundColor:[UIColor redColor]];

    UIViewController *greenController = [[UIViewController alloc] init];
    [greenController setTitle:@"GREEN"];
    [[greenController view] setBackgroundColor:[UIColor greenColor]];

    UIViewController *blueController = [[UIViewController alloc] init];
    [blueController setTitle:@"BLUE"];
    [[blueController view] setBackgroundColor:[UIColor blueColor]];

    JPTabViewController *tabViewController = [[JPTabViewController alloc] initWithControllers:@[redController, greenController, blueController]];

```

English

JPTabViewController is an iOS graphical component for achieving a Android Tab Fragment.

Easy to use: initialization with an array of controllers.

```Objective-C
#import "JPTabViewController.h"

    UIViewController *redController = [[UIViewController alloc] init];
    [redController setTitle:@"RED"];
    [[redController view] setBackgroundColor:[UIColor redColor]];

    UIViewController *greenController = [[UIViewController alloc] init];
    [greenController setTitle:@"GREEN"];
    [[greenController view] setBackgroundColor:[UIColor greenColor]];

    UIViewController *blueController = [[UIViewController alloc] init];
    [blueController setTitle:@"BLUE"];
    [[blueController view] setBackgroundColor:[UIColor blueColor]];

    JPTabViewController *tabViewController = [[JPTabViewController alloc] initWithControllers:@[redController, greenController, blueController]];

```
