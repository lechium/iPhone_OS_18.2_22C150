//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SKUIItem, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIProductPageAction : NSObject
{
    long long _actionType;	// 8 = 0x8
    SKUIItem *_item;	// 16 = 0x10
    NSString *_urlTitle;	// 24 = 0x18
    CDUnknownBlockType _viewControllerBlock;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
}

+ (id)actionWithType:(long long)arg1;	// IMP=0x00600000001ba11e
- (void).cxx_destruct;	// IMP=0x00000000001ba270
@property(copy, nonatomic) CDUnknownBlockType viewControllerBlock; // @synthesize viewControllerBlock=_viewControllerBlock;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(retain, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) UIViewController *viewController;

@end

