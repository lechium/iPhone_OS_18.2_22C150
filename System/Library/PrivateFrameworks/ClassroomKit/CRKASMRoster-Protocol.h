//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSArray, NSSet;
@protocol CRKASMOrganization, CRKASMUser;

@protocol CRKASMRoster <NSObject>
@property(readonly, copy, nonatomic) NSSet *allTrustedUserCertificates;
@property(readonly, copy, nonatomic) NSArray *courses;
@property(readonly, nonatomic) id <CRKASMUser> user;
@property(readonly, nonatomic) id <CRKASMOrganization> organization;
@end

