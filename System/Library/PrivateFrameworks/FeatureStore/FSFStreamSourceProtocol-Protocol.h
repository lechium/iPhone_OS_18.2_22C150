//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FeatureStore/NSObject-Protocol.h>

@class NSDictionary, NSSet;
@protocol FSFCurareInteraction, FSFStreamQueryProtocol;

@protocol FSFStreamSourceProtocol <NSObject>
- (_Bool)deleteCurrentStream;
- (void)retrieveWithInteractionWrapper:(NSSet *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (NSDictionary *)retrieveWithInteractionWrapper:(NSSet *)arg1;
- (void)retrieve:(NSSet *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (NSDictionary *)retrieve:(NSSet *)arg1;
- (_Bool)insert:(id <FSFCurareInteraction>)arg1 error:(id *)arg2;
- (NSDictionary *)retrieveWithQuery:(id <FSFStreamQueryProtocol>)arg1;
@end

