//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface PushNotificationSoundsSyncOperation : ISOperation
{
}

- (id)_newSoundFileURLCache;	// IMP=0x00400000000a5b27
- (_Bool)_downloadSoundFiles:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a53df
- (_Bool)_downloadSoundFileWithURL:(id)arg1 name:(id)arg2 cache:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000a4d37
- (void)run;	// IMP=0x00100000000a4a9d

@end

