//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQHDrawable : NSObject
{
}

+ (Class)beginTable:(id)arg1;	// IMP=0x00100000000267f3
+ (int)endDrawables:(id)arg1;	// IMP=0x00100000000267e8
+ (int)handleInlineDrawable:(id)arg1 htmlState:(id)arg2;	// IMP=0x0010000000026175
+ (int)handleFloatingDrawable:(id)arg1 htmlState:(id)arg2;	// IMP=0x0010000000025b31
+ (void)doneGeneratingDrawable:(id)arg1 htmlState:(id)arg2;	// IMP=0x0010000000025ac9
+ (void)aboutToGenerateDrawable:(id)arg1 htmlState:(id)arg2;	// IMP=0x00100000000258ea
+ (int)handleDrawable:(id)arg1 state:(id)arg2;	// IMP=0x00100000000258a7
+ (int)beginDrawables:(id)arg1;	// IMP=0x001000000002589c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

