//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPOperation.h>

@class FPDDomain, FPDRequest, FPDServer, NSArray;

__attribute__((visibility("hidden")))
@interface FPDAttachKnownFolderOperation : FPOperation
{
    unsigned long long _knownFolders;	// 8 = 0x8
    NSArray *_knownFolderPhysicalURLs;	// 16 = 0x10
    FPDDomain *_onlyForDomain;	// 24 = 0x18
    FPDServer *_server;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
    FPDRequest *_request;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000d2803
- (void)main;	// IMP=0x00000000000d1c17
- (id)resolveKnownFolderURLsWithError:(id *)arg1;	// IMP=0x00000000000d1acc
- (void)notifyUserForDomain:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d16cf
- (id)initWithKnownFolders:(unsigned long long)arg1 onlyForDomain:(id)arg2 server:(id)arg3 options:(unsigned long long)arg4 request:(id)arg5;	// IMP=0x00000000000d15c7
- (id)initWithKnownFolderURLs:(id)arg1 onlyForDomain:(id)arg2 server:(id)arg3 options:(unsigned long long)arg4 request:(id)arg5;	// IMP=0x00000000000d14ac

@end
