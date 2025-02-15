//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/PHATask-Protocol.h>

@class CPAnalytics, MAProgressReporter, PHPhotoLibrary;

@protocol PHAPhotoLibraryTask <PHATask>
- (_Bool)runWithPhotoLibrary:(PHPhotoLibrary *)arg1 analytics:(CPAnalytics *)arg2 progressReporter:(MAProgressReporter *)arg3 error:(id *)arg4;
- (_Bool)shouldRunWithPhotoLibrary:(PHPhotoLibrary *)arg1;
@end

