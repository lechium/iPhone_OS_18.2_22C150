//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDWPExternalTextWrap, NSString;

@interface GQDGroup
{
    struct __CFArray *mDrawables;	// 72 = 0x48
    GQDWPExternalTextWrap *mExternalTextWrap;	// 80 = 0x50
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x001000000000b194
- (id)externalTextWrap;	// IMP=0x000000000000b209
- (struct __CFArray *)drawables;	// IMP=0x000000000000b1f8
- (void)dealloc;	// IMP=0x000000000000b1a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
