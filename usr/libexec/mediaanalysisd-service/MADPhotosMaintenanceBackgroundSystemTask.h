//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MADPhotosMaintenanceBackgroundSystemTask
{
}

+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00400000000c4014
+ (unsigned long long)taskID;	// IMP=0x00100000000c400c
+ (_Bool)enabledByDefault;	// IMP=0x00100000000c4004
+ (id)identifier;	// IMP=0x00100000000c3ff7
+ (id)sharedTask;	// IMP=0x00100000000c3f6a
- (void)submitTask:(id *)arg1;	// IMP=0x00400000000c4a31
- (void)executeWithSystemTask:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4049

@end
