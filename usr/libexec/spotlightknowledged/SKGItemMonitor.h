//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SKGItemMonitor : NSObject
{
    NSString *_resourcePath;	// 8 = 0x8
    NSMutableDictionary *_domains;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000342f9
- (long long)personaCountOfDomain:(id)arg1;	// IMP=0x0010000000034258
- (long long)domainCount;	// IMP=0x0010000000034218
- (void)addSeenItem:(id)arg1 bundle:(id)arg2 persona:(id)arg3 protectionClass:(id)arg4;	// IMP=0x0010000000033ec3
- (_Bool)haveSeenItem:(id)arg1 bundle:(id)arg2 persona:(id)arg3 protectionClass:(id)arg4;	// IMP=0x0010000000033c6a
- (void)clear;	// IMP=0x0010000000033b95
- (void)flush;	// IMP=0x00100000000334fa
- (void)load;	// IMP=0x0010000000032e29
- (id)initWithResourceDirectoryPath:(id)arg1;	// IMP=0x0010000000032d6a

@end
