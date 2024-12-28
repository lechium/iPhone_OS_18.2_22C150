//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIView;

__attribute__((visibility("hidden")))
@interface SKUIViewReusePool : NSObject
{
    UIView *_parentView;	// 8 = 0x8
    NSMutableDictionary *_reuseClasses;	// 16 = 0x10
    NSMutableArray *_viewPool;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000203a84
- (Class)viewClassWithReuseIdentifier:(id)arg1;	// IMP=0x00000000002039fb
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;	// IMP=0x000000000020397d
- (void)recycleReusableViews:(id)arg1;	// IMP=0x0000000000203743
- (void)hideUnusedViews;	// IMP=0x0000000000203612
- (id)dequeueReusableViewWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000203484
- (id)initWithParentView:(id)arg1;	// IMP=0x000000000020339a

@end
