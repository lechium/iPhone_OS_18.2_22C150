//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class HMCDUserModel, NSUUID;

@interface HMCDUserSharedSettingsModel : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000011bd0

// Remaining properties
@property(nonatomic) _Bool isDolbyAtmosEnabled; // @dynamic isDolbyAtmosEnabled;
@property(nonatomic) _Bool isExplicitContentAllowed; // @dynamic isExplicitContentAllowed;
@property(nonatomic) _Bool isLosslessMusicEnabled; // @dynamic isLosslessMusicEnabled;
@property(nonatomic) _Bool isPlaybackInfluencesEnabled; // @dynamic isPlaybackInfluencesEnabled;
@property(nonatomic) _Bool isSiriIdentifyVoiceEnabled; // @dynamic isSiriIdentifyVoiceEnabled;
@property(nonatomic) _Bool isiTunesAccountAllowed; // @dynamic isiTunesAccountAllowed;
@property(nonatomic, copy) NSUUID *modelID; // @dynamic modelID;
@property(nonatomic, retain) HMCDUserModel *user; // @dynamic user;

@end

