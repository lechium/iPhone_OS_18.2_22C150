//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkServices/NSObject-Protocol.h>

@class LNEntity, LNExportedContentConfiguration, LNQueryRequest, NSArray, NSString;

@protocol LNConnectionHostEntityInterface <NSObject>
- (void)exportTransientEntities:(NSArray *)arg1 withConfiguration:(LNExportedContentConfiguration *)arg2 completionHandler:(void (^)(LNValue *, NSError *))arg3;
- (void)fetchEntityURL:(LNEntity *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)updateProperties:(NSArray *)arg1 withQuery:(LNQueryRequest *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)fetchValueForPropertyWithIdentifier:(NSString *)arg1 entity:(LNEntity *)arg2 completionHandler:(void (^)(LNValue *, NSError *))arg3;
@end
