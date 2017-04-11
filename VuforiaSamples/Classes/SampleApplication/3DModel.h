

#import <Foundation/Foundation.h>

// this class reads a text file describing a 3d Model

@interface SampleApplication3DModel : NSObject

@property (nonatomic, readonly) NSInteger numVertices;
@property (nonatomic, readonly) float* vertices;
@property (nonatomic, readonly) float* normals;
@property (nonatomic, readonly) float* texCoords;

- (id)initWithTxtResourceName:(NSString *) name;

- (void) read;

@end
