//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, UIColor;

@interface _TtC10ContactsUI33CNMemojiPosterConfigurationReader : NSObject
{
    MISSING_TYPE *memojiPosterConfiguration;	// 8 = 0x8
}

+ (id)memojiPosterConfigurationDataFromUserInfo:(id)arg1;	// IMP=0x00400000000081d0
+ (_Bool)canReadConfiguration;	// IMP=0x0040000000007e20
- (void).cxx_destruct;	// IMP=0x0000000000008630
- (id)init;	// IMP=0x00000000000085d0
- (id)initWithPosterConfigurationUserInfo:(id)arg1;	// IMP=0x0000000000008180
@property(nonatomic, readonly) NSData *avatarPoseData;
@property(nonatomic, readonly) NSData *avatarRecordData;
@property(nonatomic, readonly) NSData *avatarImageData;
@property(nonatomic, readonly) UIColor *backgroundColor;

@end
