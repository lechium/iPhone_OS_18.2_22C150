//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL, UTType;

@interface PXPhotosFileProviderRegisterFileRepresentation : NSObject
{
    MISSING_TYPE *fileProviderURL;	// 1919907685 = 0x726f7765
    MISSING_TYPE *contentType;	// 1853189987 = 0x6e756f63
    MISSING_TYPE *hasLimitedVisibility;	// 12 = 0xc
    MISSING_TYPE *uuid;	// 24 = 0x18
    MISSING_TYPE *identifierCode;	// 65536 = 0x10000
    MISSING_TYPE *isThumbnail;	// 1937330991 = 0x7379532f
}

- (void).cxx_destruct;	// IMP=0x0000000000a8fb30
- (id)init;	// IMP=0x0000000000a8fa90
@property(nonatomic, readonly) _Bool isThumbnail; // @synthesize isThumbnail;
@property(nonatomic, readonly) NSString *identifierCode;
@property(nonatomic, readonly) NSString *uuid;
@property(nonatomic, readonly) _Bool hasLimitedVisibility; // @synthesize hasLimitedVisibility;
@property(nonatomic, readonly) UTType *contentType;
@property(nonatomic, readonly) NSURL *fileProviderURL;

@end

