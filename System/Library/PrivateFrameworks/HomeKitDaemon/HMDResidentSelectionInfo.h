//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDResidentSelectionInfo : NSObject
{
    NSUUID *_preferredResidentIDSIdentifier;	// 8 = 0x8
    unsigned long long _currentModeType;	// 16 = 0x10
    NSDate *_selectionTimestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000d51a2a
@property(readonly) NSDate *selectionTimestamp; // @synthesize selectionTimestamp=_selectionTimestamp;
@property(readonly) unsigned long long currentModeType; // @synthesize currentModeType=_currentModeType;
@property(retain) NSUUID *preferredResidentIDSIdentifier; // @synthesize preferredResidentIDSIdentifier=_preferredResidentIDSIdentifier;
- (id)description;	// IMP=0x0000000000d51917
- (id)initWithPreferredResidentIDSIdentifier:(id)arg1 currentResidentSelectionModeType:(unsigned long long)arg2 selectionTimestamp:(id)arg3;	// IMP=0x0000000000d5187f
- (id)initWithPreferredResidentIDSIdentifier:(id)arg1 selectionTimestamp:(id)arg2;	// IMP=0x0000000000d51860

@end
