//
//  JPTabViewController.h
//  JPTabViewController
//
//  Created by Jean-Philippe DESCAMPS on 19/03/2014.
//  Copyright (c) 2014 Jean-Philippe. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol JPTabViewControllerDelegate <NSObject>

@optional
- (void)currentTabHasChanged:(NSInteger)selIndex;

@end

@interface JPTabViewController : UIViewController <UIScrollViewDelegate>
{
    NSInteger selectedTab;
}

@property (nonatomic, assign) id<JPTabViewControllerDelegate> delegate;

@property (nonatomic, assign) float menuHeight;

- (id)initWithControllers:(NSArray *)controllers;

- (void)selectTabNum:(NSInteger)index;

- (NSInteger)selectedTab;

@end
