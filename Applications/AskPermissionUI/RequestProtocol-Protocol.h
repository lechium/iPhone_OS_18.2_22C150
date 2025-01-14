//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString, RequestLocalizations;

@protocol RequestProtocol <NSObject>
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSString *offerName;
@property(readonly, nonatomic) RequestLocalizations *localizations;
@property(readonly, nonatomic) NSString *itemIdentifier;
@property(readonly, nonatomic) NSString *requestIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSDate *date;
- (NSDictionary *)compile;
- (id)initWithDictionary:(NSDictionary *)arg1;
@end

