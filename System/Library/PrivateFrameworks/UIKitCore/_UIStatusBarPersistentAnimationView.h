//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPersistentAnimationView : UIView
{
    NSHashTable *_animations;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000150a076
@property(retain, nonatomic) NSHashTable *animations; // @synthesize animations=_animations;
@property(copy, nonatomic) NSArray *persistentAnimations;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000001509a3a

@end
