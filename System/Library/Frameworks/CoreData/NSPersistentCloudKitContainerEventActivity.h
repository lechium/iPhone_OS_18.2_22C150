//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSPersistentCloudKitContainerEventActivity
{
    NSMutableDictionary *_activitiesByPhaseNum;	// 64 = 0x40
    long long _eventType;	// 72 = 0x48
}

- (id)createDictionaryRepresentation;	// IMP=0x00000000002ec73b
- (id)endActivityForPhase:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x00000000002ec4e4
- (id)beginActivityForPhase:(unsigned long long)arg1;	// IMP=0x00000000002ec41a
- (void)dealloc;	// IMP=0x00000000002ec3d8

@end
