//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDDrawable, NSString;

@interface GQDBGObjectPlaceholder
{
    char *mContentType;	// 88 = 0x58
    GQDDrawable *mDrawable;	// 96 = 0x60
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x0010000000004ff2
- (id)drawable;	// IMP=0x000000000000505a
- (void)dealloc;	// IMP=0x0000000000004fff
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x000000000000506b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
