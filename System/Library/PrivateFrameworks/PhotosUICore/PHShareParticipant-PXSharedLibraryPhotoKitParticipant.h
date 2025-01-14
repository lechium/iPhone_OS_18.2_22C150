//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHShareParticipant.h>

@class NSPersonNameComponents, NSString;
@protocol PXPerson, PXSharedLibraryImageProvider;

@interface PHShareParticipant (PXSharedLibraryPhotoKitParticipant)
@property(readonly, nonatomic) id <PXSharedLibraryImageProvider> imageProvider;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) id <PXPerson> person;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *emailAddress;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCurrentUser;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
@property(readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
@property(readonly) Class superclass;
@end

