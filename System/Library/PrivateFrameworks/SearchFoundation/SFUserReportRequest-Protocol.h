//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFPunchout;

@protocol SFUserReportRequest <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *attachmentSectionTitle;
@property(retain, nonatomic) SFPunchout *disclaimerLearnMorePunchout;
@property(copy, nonatomic) NSString *disclaimerText;
@property(copy, nonatomic) NSString *reportOptionsSectionTitle;
@property(nonatomic) int reportType;
@property(copy, nonatomic) NSArray *userReportOptions;
@property(copy, nonatomic) NSString *dismissText;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *affordanceText;
@end

