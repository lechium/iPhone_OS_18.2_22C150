//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerActionButtonBlockHandler : NSObject
{
    CDUnknownBlockType _actionBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003ca646
@property(readonly, copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)performAction;	// IMP=0x00000000003ca5cb
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003ca558

@end

