//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class PGManager, PHPhotoLibrary;

@protocol PHAMusicJob <NSObject>
@property(readonly, nonatomic) double periodicity;
- (_Bool)shouldRunForLibrary:(PHPhotoLibrary *)arg1;
- (void)runWithGraphManager:(PGManager *)arg1 progressBlock:(void (^)(double, _Bool *))arg2 completionHandler:(void (^)(NSError *))arg3;
@end

