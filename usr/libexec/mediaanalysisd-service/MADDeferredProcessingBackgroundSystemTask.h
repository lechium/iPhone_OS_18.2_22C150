//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MADDeferredProcessingBackgroundSystemTask
{
    struct atomic<bool> _cancelledByDAS;	// 8 = 0x8
}

+ (unsigned long long)taskID;	// IMP=0x004000000014086e
- (void)registerTask;	// IMP=0x0020000000141366
- (void)executeWith:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000140963

@end
