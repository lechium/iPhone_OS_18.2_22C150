//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSArray, NSData, NSDate, NSString;

@interface NSDictionary (NNArticleIdentifierSyncStateProviding)
+ (id)nn_activeSyncStateWithIdentifier:(id)arg1 active:(_Bool)arg2;	// IMP=0x0020000000009226
@property(readonly, nonatomic) _Bool nn_active;
@property(readonly, nonatomic) NSDate *nn_date;
@property(readonly, copy, nonatomic) NSString *nn_identifier;
@property(readonly, nonatomic) NSString *sync_NewsURLString;
@property(readonly, nonatomic) NSData *sync_publisherLogoImageData;
@property(readonly, nonatomic) NSData *sync_thumbnailImageData;
@property(readonly, nonatomic) NSString *sync_colorHexString;
@property(readonly, nonatomic) NSString *sync_publisherIdentifier;
@property(readonly, nonatomic) NSString *sync_publisherName;
@property(readonly, nonatomic) NSArray *sync_headlines;
@property(readonly, nonatomic) NSString *sync_excerpt;
@property(readonly, nonatomic) NSString *sync_title;
@property(readonly, nonatomic) unsigned long long sync_type;
@property(readonly, nonatomic) NSString *sync_name;
@property(readonly, nonatomic) NSString *sync_identifier;
@property(readonly, nonatomic) unsigned long long sync_headlineCount;
@property(readonly, nonatomic) NSArray *sync_sections;
@property(readonly, nonatomic) NSDate *sync_expirationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
