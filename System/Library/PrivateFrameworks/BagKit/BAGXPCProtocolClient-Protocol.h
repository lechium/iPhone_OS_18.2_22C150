//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BagKit/NSObject-Protocol.h>

@class BAGResourceOptions, BAGResourceUpdateContext;
@protocol BAGResource;

@protocol BAGXPCProtocolClient <NSObject>
- (void)resourceUpdated:(id <BAGResource>)arg1 forOptions:(BAGResourceOptions *)arg2 withContext:(BAGResourceUpdateContext *)arg3;
@end
