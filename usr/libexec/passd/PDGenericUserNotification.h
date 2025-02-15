//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDGenericUserNotification
{
    NSString *_title;	// 136 = 0x88
    NSString *_subtitle;	// 144 = 0x90
    NSString *_message;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002c2ea9
- (void).cxx_destruct;	// IMP=0x00200000002c3207
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002c313a
- (id)description;	// IMP=0x00100000002c3093
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002c2fd9
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002c2eb1
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 forPassUniqueIdentifier:(id)arg4 hashComponents:(id)arg5;	// IMP=0x00100000002c2ceb
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 forPassUniqueIdentifier:(id)arg4;	// IMP=0x00100000002c2bc8
- (id)initWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x00100000002c2bae
- (id)initWithMessage:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x00100000002c2b92
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3;	// IMP=0x00100000002c2b7d
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x00100000002c2b63
- (id)initWithMessage:(id)arg1;	// IMP=0x00100000002c2b47

@end

