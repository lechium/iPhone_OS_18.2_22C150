//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NRSyncDataDeleterQuarantineJobItem : NSObject
{
    NSString *_sourcePath;	// 8 = 0x8
    NSString *_quarantinePath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000004a10
@property(retain, nonatomic) NSString *quarantinePath; // @synthesize quarantinePath=_quarantinePath;
@property(retain, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
- (id)initWithSourcePath:(id)arg1;	// IMP=0x001000000000493b

@end

