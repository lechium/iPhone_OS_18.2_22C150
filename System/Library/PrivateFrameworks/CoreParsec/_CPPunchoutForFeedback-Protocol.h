//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol _CPPunchoutForFeedback <NSObject>
@property(readonly, nonatomic) unsigned long long whichBundleid;
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSArray *urls;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *name;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)addUrls:(NSString *)arg1;
- (void)clearUrls;
@end

