//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKHomePerson, MKFCKUser, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKPhotosPerson
{
}

+ (id)rootKeyPath;	// IMP=0x0080000000f62311
+ (id)fetchRequest;	// IMP=0x0080000000fae0fc
- (_Bool)validateUser:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000f6216e
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x0000000000f61f23
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x0000000000f61d54
- (void)setHome:(id)arg1;	// IMP=0x0000000000f61d4e
- (id)home;	// IMP=0x0000000000f61cfe

// Remaining properties
@property(retain, nonatomic) MKFCKHomePerson *linkedHomePerson; // @dynamic linkedHomePerson;
@property(copy, nonatomic) NSUUID *photoLibraryPersonUUID; // @dynamic photoLibraryPersonUUID;
@property(retain, nonatomic) MKFCKUser *user; // @dynamic user;

@end

