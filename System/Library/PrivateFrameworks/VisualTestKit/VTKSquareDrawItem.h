//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VTKSquareDrawItem : NSObject
{
    UIColor *_color;	// 8 = 0x8
    struct CGRect _frame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000061a5
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)drawAtContext:(id)arg1;	// IMP=0x00000000000060ad
- (id)initWitColor:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0000000000005fc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

