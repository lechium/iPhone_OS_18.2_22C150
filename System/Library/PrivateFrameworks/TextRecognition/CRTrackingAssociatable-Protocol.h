//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/NSObject-Protocol.h>

@class CRImageSpaceQuad, CRNormalizedQuad, NSUUID;

@protocol CRTrackingAssociatable <NSObject>
@property(retain) CRImageSpaceQuad *boundingQuadAfterOCR;
@property(readonly) CDStruct_d80e62f2 boundingQuadHomographySinceOCRDispatch;
@property(retain) CRNormalizedQuad *boundingQuadAtOCRDispatch;
@property CDStruct_d80e62f2 boundingQuadHomography;
@property(retain) CRNormalizedQuad *originalBoundingQuad;
@property(retain) CRNormalizedQuad *boundingQuad;
@property(retain) NSUUID *trackingID;
@property _Bool trackNeedsReplacement;
@end
