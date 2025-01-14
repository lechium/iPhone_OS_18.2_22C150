//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQHPages : NSObject
{
}

+ (void)mapCurrentHiddenPositioningFooterFromPublication:(id)arg1 state:(id)arg2;	// IMP=0x001000000002bb1e
+ (void)mapCurrentHeaderAndFooterFromPublication:(id)arg1 state:(id)arg2;	// IMP=0x001000000002b9df
+ (int)setCurrentPageIndex:(int)arg1 state:(id)arg2;	// IMP=0x001000000002b9a9
+ (int)handleSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(id)arg4;	// IMP=0x001000000002b95d
+ (int)handleFooters:(struct __CFArray *)arg1 state:(id)arg2;	// IMP=0x001000000002b925
+ (int)handleHeaders:(struct __CFArray *)arg1 state:(id)arg2;	// IMP=0x001000000002b8ed
+ (Class)enterBodyStorage:(id)arg1;	// IMP=0x001000000002b8dc
+ (Class)enterMainDrawablesForPage:(unsigned int)arg1 state:(id)arg2;	// IMP=0x001000000002b8cb
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;	// IMP=0x001000000002b8c0
+ (int)handlePageSetup:(id)arg1 state:(id)arg2;	// IMP=0x001000000002b1d0
+ (int)endPublication:(id)arg1 state:(id)arg2;	// IMP=0x001000000002ae9c
+ (int)beginPublication:(id)arg1 state:(id)arg2;	// IMP=0x001000000002ae91
+ (void)mapHeaderOrFooter:(id)arg1 isHeader:(_Bool)arg2 toPublication:(id)arg3 state:(id)arg4;	// IMP=0x001000000002bebd
+ (void)handlePagesOrders:(id)arg1;	// IMP=0x001000000002bd98
+ (void)handleZOrder:(unsigned int)arg1 cssClassName:(struct __CFString *)arg2 state:(id)arg3;	// IMP=0x001000000002bd45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

