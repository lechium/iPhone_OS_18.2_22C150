//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (Sharing)
- (id)valueForQueryKey:(id)arg1;	// IMP=0x0030000000088ed0
- (id)issueSandboxExtensionData;	// IMP=0x0030000000088d55
- (void)coordinateReadingWithSaveToTempDir:(_Bool)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00300000000889d4
- (void)coordinateReadingWithSaveToTempDir:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00300000000889ba
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) _Bool isiWorkDocument;
@end
