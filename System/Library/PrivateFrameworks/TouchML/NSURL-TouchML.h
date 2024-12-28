//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSDictionary, NSString;

@interface NSURL (TouchML)
+ (void)initializeJSContext:(id)arg1;	// IMP=0x0010000000072659
- (id)withPathComponent:(id)arg1;	// IMP=0x0010000000073804
- (id)filterQueryParameters:(id)arg1;	// IMP=0x0010000000073471
- (id)withQueryParameters:(id)arg1;	// IMP=0x0010000000072bcd
- (id)withQueryParameter:(id)arg1:(id)arg2;	// IMP=0x0010000000072aee
@property(readonly, nonatomic) NSDictionary *queryParameters;

// Remaining properties
@property(readonly, nonatomic) NSString *absoluteString;
@property(readonly, nonatomic) NSString *resourceSpecifier;
@property(readonly, nonatomic) NSString *scheme;
@end
