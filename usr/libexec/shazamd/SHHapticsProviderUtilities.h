//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SHHapticsProviderUtilities : NSObject
{
}

+ (id)availableHapticAlgorithms;	// IMP=0x0040000000056746
+ (id)musicHapticsRootDirectory;	// IMP=0x0010000000056635
+ (id)folderNameForMediaItem:(id)arg1;	// IMP=0x0010000000056371
+ (id)decompressionDirectoryForMediaItem:(id)arg1;	// IMP=0x00100000000562cd
+ (_Bool)isValidAppleArchiveFileURL:(id)arg1;	// IMP=0x0010000000056209
+ (id)hapticTracksForMediaItem:(id)arg1 inDirectory:(id)arg2;	// IMP=0x0010000000055c6e
+ (id)hapticFromResponse:(id)arg1;	// IMP=0x00100000000557f7
+ (id)cachedHapticTracksForMediaItem:(id)arg1;	// IMP=0x0010000000055749
+ (id)hapticsFromDownloadResponses:(id)arg1;	// IMP=0x0010000000055547

@end

