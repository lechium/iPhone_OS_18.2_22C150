//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/LACRequest-Protocol.h>

@class NSData, NSUUID;

@protocol LACCredentialRequest <LACRequest>
@property(readonly, nonatomic) NSUUID *contextID;
@property(readonly, nonatomic) unsigned int userID;
@property(readonly, nonatomic) NSData *externalizedContext;
@property(readonly, nonatomic) long long credential;
@end

