//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol _ICLexiconManaging
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)hibernate;
- (void)warmUp;
- (void)unloadLexicons;
- (NSArray *)loadLexicons;
- (NSArray *)loadLexiconsUsingFilter:(NSString * (^)(NSString *))arg1;
- (NSArray *)loadLexicons:(NSString * (^)(NSString *))arg1;
- (void)removeNamedEntitiesUpdateObserver:(void (^)(void))arg1;
- (void (^)(void))addNamedEntitiesUpdateObserver:(void (^)(void))arg1;
- (void)removeContactObserver:(void (^)(NSDictionary *))arg1;
- (void (^)(NSDictionary *))addContactObserver:(void (^)(NSDictionary *))arg1;
@end

