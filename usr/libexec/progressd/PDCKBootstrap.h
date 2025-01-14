//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDCKBootstrap
{
}

- (void)subscribeToZonesIfNeeded;	// IMP=0x00400000000e138c
- (void)markAsBootstrapped;	// IMP=0x00100000000e1359
- (_Bool)isSubscribedTo:(id)arg1;	// IMP=0x00100000000e12f4
- (void)setSubscribed:(_Bool)arg1 toSubscriptionWithID:(id)arg2;	// IMP=0x00100000000e1291
- (void)createMissingZones:(id)arg1;	// IMP=0x00100000000e1021
- (void)createRecordZonesIfNeeded;	// IMP=0x00100000000e077f
- (_Bool)writeZoneNamesForUserID:(id)arg1;	// IMP=0x00100000000e04b6
- (void)setupZones;	// IMP=0x00100000000e033e
- (void)cleanupStaleZoneInfo;	// IMP=0x00100000000e0102
- (void)execute;	// IMP=0x00100000000e00bc
- (_Bool)maySyncWithSurveyAnswerZone;	// IMP=0x00100000000dfe02
- (_Bool)maySyncWithAssetZone;	// IMP=0x00100000000dfdfa
- (_Bool)maySyncWithTeacherZone;	// IMP=0x00100000000dfdae
- (_Bool)maySyncWithProgressZone;	// IMP=0x00100000000dfd47

@end

