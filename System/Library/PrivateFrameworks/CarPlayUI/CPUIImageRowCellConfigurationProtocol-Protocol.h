//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CPUIImageRowCellConfigurationProtocol <NSObject>
- (NSString *)bundleIdentifier;
- (NSArray *)imageTitles;
- (_Bool)enabled;
- (_Bool)showActivityIndicator;
- (NSArray *)artworkCatalogs;
- (void (^)(void))selectTitleBlock;
- (void (^)(long long))selectGridItemBlock;
- (NSString *)title;
@end
