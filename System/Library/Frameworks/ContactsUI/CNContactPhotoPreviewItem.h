//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNContactPhotoPreviewItem : NSObject
{
    NSURL *_previewItemURL;	// 8 = 0x8
    NSString *_previewItemTitle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017d034
@property(retain, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_previewItemTitle;
@property(retain, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

