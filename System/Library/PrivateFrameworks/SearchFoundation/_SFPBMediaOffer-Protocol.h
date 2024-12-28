//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBImage;

@protocol _SFPBMediaOffer <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBImage *image;
@property(nonatomic) _Bool isEnabled;
@property(copy, nonatomic) NSString *offerIdentifier;
@property(copy, nonatomic) NSString *sublabel;
@property(retain, nonatomic) _SFPBActionItem *actionItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
