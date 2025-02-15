//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol CNFavoritesLogger <NSObject>
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)failedToWriteFavoritesToPath:(NSString *)arg1 error:(NSError *)arg2 simulateCrashReport:(_Bool)arg3;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(NSString *)arg1;
- (void)failedToWriteRemoteFavorites:(NSError *)arg1;
- (void)failedToVerifyFavorites:(NSArray *)arg1 withPropertyListFavorites:(NSArray *)arg2 error:(NSError *)arg3;
- (void)failedToConvertFavoritesToPropertyList:(NSError *)arg1;
- (void)failedToReadFavoritesFromPath:(NSString *)arg1 error:(NSError *)arg2 simulateCrashReport:(_Bool)arg3;
- (void)failedToReadRemoteFavorites:(NSError *)arg1;
- (void)finishedWritingFavoritesToPath:(NSString *)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedWritingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(NSString *)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedReadingRemoteFavorites;
- (void)rematchingFavorites:(void (^)(void (^)(void)))arg1;
- (void)writingFavorites:(void (^)(void (^)(void)))arg1;
- (void)readingFavorites:(void (^)(void (^)(void)))arg1;
@end

