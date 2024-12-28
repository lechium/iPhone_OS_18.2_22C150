//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFImage;

@protocol SFMetaInfoCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFImage *badge;
@property(copy, nonatomic) NSURL *hostPageURL;
@property(copy, nonatomic) NSURL *contentURL;
@property(nonatomic) _Bool trending;
@property(copy, nonatomic) NSString *type;
@end
