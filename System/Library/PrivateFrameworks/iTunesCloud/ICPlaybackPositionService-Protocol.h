//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICPlaybackPositionEntity, NSArray, NSString;

@protocol ICPlaybackPositionService <NSObject>
- (void)pushPlaybackPositionEntity:(ICPlaybackPositionEntity *)arg1 completionBlock:(void (^)(_Bool, NSError *, ICPlaybackPositionEntity *))arg2;
- (void)pullPlaybackPositionEntity:(ICPlaybackPositionEntity *)arg1 completionBlock:(void (^)(_Bool, NSError *, ICPlaybackPositionEntity *))arg2;
- (void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(ICPlaybackPositionEntity *)arg1;
- (void)getLocalPlaybackPositionForEntityIdentifiers:(NSArray *)arg1 forDomain:(NSString *)arg2 fromLibraryWithIdentifier:(NSString *)arg3 completionBlock:(void (^)(_Bool, NSError *, NSArray *))arg4;
- (void)persistPlaybackPositionEntity:(ICPlaybackPositionEntity *)arg1 isCheckpoint:(_Bool)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3;
- (void)deletePlaybackPositionEntity:(ICPlaybackPositionEntity *)arg1;
- (void)deletePlaybackPositionEntitiesFromLibraryWithIdentifier:(NSString *)arg1;
- (void)synchronizePlaybackPositionsForLibraryWithIdentifier:(NSString *)arg1 forDomain:(NSString *)arg2 isCheckpoint:(_Bool)arg3;
@end
