//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TPSTip;

@interface TPSSavedTipsManager : NSObject
{
    MISSING_TYPE *_currentTip;	// 8 = 0x8
    MISSING_TYPE *_isCurrentTipSaved;	// 16 = 0x10
    MISSING_TYPE *savedTipsMap;	// 24 = 0x18
    MISSING_TYPE *queue;	// 32 = 0x20
    MISSING_TYPE *_$observationRegistrar;	// 0 = 0x0
}

+ (id)sharedInstance;	// IMP=0x0040000000075d70
- (void).cxx_destruct;	// IMP=0x0000000000078940
- (void)removeInvalidEntries;	// IMP=0x0000000000078390
- (id)identifiers;	// IMP=0x0000000000077760
- (void)updateSavedTipsWithCorrelationId:(id)arg1 tipIdentifier:(id)arg2 savedDate:(id)arg3 lastUsedVersion:(id)arg4;	// IMP=0x0000000000077420
- (void)toggleSavedTipWithCorrelationId:(id)arg1 tipIdentifier:(id)arg2;	// IMP=0x0000000000076ae0
- (id)savedDateWithCorrelationId:(id)arg1;	// IMP=0x00000000000764d0
- (_Bool)isSavedWithTipIdentifier:(id)arg1;	// IMP=0x0000000000076290
- (id)init;	// IMP=0x0000000000076020
@property(nonatomic) _Bool isCurrentTipSaved;
@property(nonatomic, retain) TPSTip *currentTip;

@end
