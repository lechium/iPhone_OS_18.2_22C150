//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface _UIButtonBarTargetAction : NSObject
{
    UIBarButtonItem *_barButtonItem;	// 8 = 0x8
    CDUnknownBlockType _actionFilter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003e2795
@property(copy, nonatomic) CDUnknownBlockType actionFilter; // @synthesize actionFilter=_actionFilter;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
- (void)_invoke:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000003e256f
@property(readonly, nonatomic) SEL proxyAction;
- (id)initWithBarButtonItem:(id)arg1;	// IMP=0x00000000003e24f7
- (id)init;	// IMP=0x00000000003e244a

@end
